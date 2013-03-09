-- phpMyAdmin SQL Dump
-- version 3.4.10.1deb1
-- http://www.phpmyadmin.net
--
-- Host: localhost
-- Generation Time: Mar 09, 2013 at 03:03 PM
-- Server version: 5.5.29
-- PHP Version: 5.3.10-1ubuntu3.5

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `acquia_drupal`
--

-- --------------------------------------------------------

--
-- Table structure for table `node`
--

CREATE TABLE IF NOT EXISTS `node` (
  `nid` int(10) unsigned NOT NULL AUTO_INCREMENT COMMENT 'The primary identifier for a node.',
  `vid` int(10) unsigned DEFAULT NULL COMMENT 'The current node_revision.vid version identifier.',
  `type` varchar(32) NOT NULL DEFAULT '' COMMENT 'The node_type.type of this node.',
  `language` varchar(12) NOT NULL DEFAULT '' COMMENT 'The languages.language of this node.',
  `title` varchar(255) NOT NULL DEFAULT '' COMMENT 'The title of this node, always treated as non-markup plain text.',
  `uid` int(11) NOT NULL DEFAULT '0' COMMENT 'The users.uid that owns this node; initially, this is the user that created it.',
  `status` int(11) NOT NULL DEFAULT '1' COMMENT 'Boolean indicating whether the node is published (visible to non-administrators).',
  `created` int(11) NOT NULL DEFAULT '0' COMMENT 'The Unix timestamp when the node was created.',
  `changed` int(11) NOT NULL DEFAULT '0' COMMENT 'The Unix timestamp when the node was most recently saved.',
  `comment` int(11) NOT NULL DEFAULT '0' COMMENT 'Whether comments are allowed on this node: 0 = no, 1 = closed (read only), 2 = open (read/write).',
  `promote` int(11) NOT NULL DEFAULT '0' COMMENT 'Boolean indicating whether the node should be displayed on the front page.',
  `sticky` int(11) NOT NULL DEFAULT '0' COMMENT 'Boolean indicating whether the node should be displayed at the top of lists in which it appears.',
  `tnid` int(10) unsigned NOT NULL DEFAULT '0' COMMENT 'The translation set id for this node, which equals the node id of the source post in each set.',
  `translate` int(11) NOT NULL DEFAULT '0' COMMENT 'A boolean indicating whether this translation page needs to be updated.',
  PRIMARY KEY (`nid`),
  UNIQUE KEY `vid` (`vid`),
  KEY `node_changed` (`changed`),
  KEY `node_created` (`created`),
  KEY `node_frontpage` (`promote`,`status`,`sticky`,`created`),
  KEY `node_status_type` (`status`,`type`,`nid`),
  KEY `node_title_type` (`title`,`type`(4)),
  KEY `node_type` (`type`(4)),
  KEY `uid` (`uid`),
  KEY `tnid` (`tnid`),
  KEY `translate` (`translate`)
) ENGINE=InnoDB  DEFAULT CHARSET=utf8 COMMENT='The base table for nodes.' AUTO_INCREMENT=35 ;

--
-- Dumping data for table `node`
--

INSERT INTO `node` (`nid`, `vid`, `type`, `language`, `title`, `uid`, `status`, `created`, `changed`, `comment`, `promote`, `sticky`, `tnid`, `translate`) VALUES
(17, 1, 'conference', 'en', 'Sociology 101', 1, 1, 1362319241, 1362725934, 0, 1, 0, 0, 0),
(18, 2, 'speaker_profile', 'en', 'Robert Brym', 1, 1, 1362319299, 1362319299, 0, 1, 0, 0, 0),
(20, 4, 'talk', 'en', 'Western Families', 6, 1, 1362319382, 1362839207, 0, 1, 0, 0, 0),
(21, 5, 'speaker_profile', 'en', 'Adam Isaiah Green', 1, 1, 1362319915, 1362319915, 0, 1, 0, 0, 0),
(22, 6, 'talk', 'en', 'Global Inequality', 3, 1, 1362320326, 1362839180, 0, 1, 0, 0, 0),
(25, 9, 'question_', 'en', 'Question ', 5, 1, 1362321455, 1362321455, 0, 1, 0, 0, 0),
(26, 10, 'question_', 'en', 'Question ', 2, 1, 1362321627, 1362321627, 0, 1, 0, 0, 0),
(27, 11, 'question_', 'en', 'Question ', 4, 1, 1362321701, 1362321701, 0, 1, 0, 0, 0),
(28, 12, 'question_', 'en', 'Question ', 2, 1, 1362321780, 1362321780, 0, 1, 0, 0, 0),
(29, 13, 'question_', 'en', 'Question ', 2, 1, 1362321826, 1362321826, 0, 1, 0, 0, 0),
(30, 14, 'question_', 'en', 'Question 30', 4, 1, 1362321905, 1362793505, 0, 1, 0, 0, 0),
(31, 15, 'question_', 'en', 'Question ', 5, 1, 1362321974, 1362321974, 0, 1, 0, 0, 0),
(32, 16, 'conference', 'en', 'Data Structures and Algorithms', 1, 1, 1362626179, 1362726812, 0, 1, 0, 0, 0),
(33, 17, 'talk', 'en', 'Disjoint Sets', 7, 1, 1362722873, 1362839218, 0, 1, 0, 0, 0),
(34, 18, 'question_', 'en', 'Question ', 1, 1, 1362793633, 1362793633, 0, 1, 0, 0, 0);

-- --------------------------------------------------------

--
-- Table structure for table `users`
--

CREATE TABLE IF NOT EXISTS `users` (
  `uid` int(10) unsigned NOT NULL DEFAULT '0' COMMENT 'Primary Key: Unique user ID.',
  `name` varchar(60) NOT NULL DEFAULT '' COMMENT 'Unique user name.',
  `pass` varchar(128) NOT NULL DEFAULT '' COMMENT 'User’s password (hashed).',
  `mail` varchar(254) DEFAULT '' COMMENT 'User’s e-mail address.',
  `theme` varchar(255) NOT NULL DEFAULT '' COMMENT 'User’s default theme.',
  `signature` varchar(255) NOT NULL DEFAULT '' COMMENT 'User’s signature.',
  `signature_format` varchar(255) DEFAULT NULL COMMENT 'The filter_format.format of the signature.',
  `created` int(11) NOT NULL DEFAULT '0' COMMENT 'Timestamp for when user was created.',
  `access` int(11) NOT NULL DEFAULT '0' COMMENT 'Timestamp for previous time user accessed the site.',
  `login` int(11) NOT NULL DEFAULT '0' COMMENT 'Timestamp for user’s last login.',
  `status` tinyint(4) NOT NULL DEFAULT '0' COMMENT 'Whether the user is active(1) or blocked(0).',
  `timezone` varchar(32) DEFAULT NULL COMMENT 'User’s time zone.',
  `language` varchar(12) NOT NULL DEFAULT '' COMMENT 'User’s default language.',
  `picture` int(11) NOT NULL DEFAULT '0' COMMENT 'Foreign key: file_managed.fid of user’s picture.',
  `init` varchar(254) DEFAULT '' COMMENT 'E-mail address used for initial account creation.',
  `data` longblob COMMENT 'A serialized array of name value pairs that are related to the user. Any form values posted during user edit are stored and are loaded into the $user object during user_load(). Use of this field is discouraged and it will likely disappear in a future...',
  PRIMARY KEY (`uid`),
  UNIQUE KEY `name` (`name`),
  KEY `access` (`access`),
  KEY `created` (`created`),
  KEY `mail` (`mail`),
  KEY `picture` (`picture`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COMMENT='Stores user data.';

--
-- Dumping data for table `users`
--

INSERT INTO `users` (`uid`, `name`, `pass`, `mail`, `theme`, `signature`, `signature_format`, `created`, `access`, `login`, `status`, `timezone`, `language`, `picture`, `init`, `data`) VALUES
(0, '', '', '', '', '', NULL, 0, 0, 0, 0, NULL, '', 0, '', NULL),
(1, 'sangah', '$S$DRkWZ8O9NTQQDDFkshB89BXFMjV3dmbaORTpavnWt3zW4S0SRvlV', 'sangah93@hotmail.com', '', '', 'plain_text', 1362317270, 1362858947, 1362804660, 1, 'America/New_York', '', 0, 'sangah93@hotmail.com', 0x613a313a7b733a33343a226c696e6b6564696e5f70726f66696c655f757365725f706167655f656e61626c6564223b693a313b7d),
(2, 'sllychn', '$S$DaC5aUDLpVKpK5nXLnQrPej3ESYVl/jW1YFSPHvRlcAYmr9AvcqE', 'sllycychan@gmail.com', '', '', 'plain_text', 1362318626, 1362724099, 1362724099, 1, 'America/New_York', '', 0, 'sllycychan@gmail.com', 0x623a303b),
(3, 'rbrym', '$S$DE9SbeeKYD8E5s8UrXo9gdcYLb8EAgJyEh0KQppAgcx8uHs7B8H7', 'rbrym@chass.utoronto.ca', '', '', 'plain_text', 1362318673, 1362793821, 1362793821, 1, 'America/New_York', '', 0, 'rbrym@chass.utoronto.ca', 0x623a303b),
(4, 'jacquesramphal', '$S$DYOXhYtJnqY0M8bxk6qEN./pdU7CvG0r6To1bluBIDZGEqzThZXQ', 'jacquesramphal@gmail.com', '', '', 'plain_text', 1362318683, 1362724292, 1362724292, 1, 'America/New_York', '', 0, 'jacquesramphal@gmail.com', NULL),
(5, 'cskimming', '$S$DmwGRUlWuFsqr.zqF5kE0Qg7gyj.I6r8QK1R2aES/X7AivTRNxhf', 'cskimming@gmail.com', '', '', 'plain_text', 1362318696, 0, 0, 1, 'America/New_York', '', 0, 'cskimming@gmail.com', NULL),
(6, 'agreen', '$S$Dl4Yz1SdajGaKbj0c.Z438CYZZNa/uh2UYzmQzGZ4cQRlQpeALlI', 'adamisaiah.green@utoronto.ca', '', '', 'plain_text', 1362319844, 1362793258, 1362793258, 1, 'America/New_York', '', 0, 'adamisaiah.green@utoronto.ca', NULL),
(7, 'stoueg', '$S$DBY5np0/O9/RoqE2ylxwyx/Pri3EM3DBQhr4rWtjkoDGTZo2yoge', 'sam@cs.toronto.edu', '', '', 'plain_text', 1362626435, 1362795022, 1362795022, 1, 'America/New_York', '', 0, 'sam@cs.toronto.edu', NULL);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
