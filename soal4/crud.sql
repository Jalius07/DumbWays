-- phpMyAdmin SQL Dump
-- version 4.7.4
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Dec 05, 2020 at 02:05 PM
-- Server version: 10.1.28-MariaDB
-- PHP Version: 5.6.32

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `crud`
--

-- --------------------------------------------------------

--
-- Table structure for table `distributor`
--

CREATE TABLE `distributor` (
  `id` int(11) NOT NULL,
  `name` varchar(255) NOT NULL,
  `address` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `distributor`
--

INSERT INTO `distributor` (`id`, `name`, `address`) VALUES
(1, 'PT. Makmur', 'Jl. Makmur Raya'),
(2, 'PT. Jayaindo', 'Jl. Jaya Wijaya'),
(3, 'PT. Makmur', 'Jl. Subur Makmur');

-- --------------------------------------------------------

--
-- Table structure for table `produk`
--

CREATE TABLE `produk` (
  `id` int(11) NOT NULL,
  `name` varchar(255) DEFAULT NULL,
  `deskripsi` text,
  `id_distributor` int(11) DEFAULT NULL,
  `serving_size` int(11) DEFAULT NULL,
  `nutrisi` text NOT NULL,
  `photos` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `produk`
--

INSERT INTO `produk` (`id`, `name`, `deskripsi`, `id_distributor`, `serving_size`, `nutrisi`, `photos`) VALUES
(1, 'Indomie', 'Indomie mie lezat', 1, 1, 'protein 10 mg', '659-mie-indomie.jpg'),
(4, 'Sedap', 'Mie sedap enak', 1, 1, 'protein 12 mg', '805-mie-sedap.jpg'),
(5, 'Supermi', 'Mie dengan kaldu lezat', 2, 1, 'protein 14 mg', '700-supermi.jpg'),
(6, 'Sukses', 'Mie dengan isi jumbo', 2, 2, 'protein 20 mg', '160-mie-sukses.jpg'),
(8, 'PopMie', 'Mie Cup', 3, 1, 'protein 11 mg', '33-pop-mie.jpg'),
(11, 'Coba', 'Mencoba Saja', 3, 4, 'Coba-Coba', '814-miles morales.jpg');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `distributor`
--
ALTER TABLE `distributor`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `produk`
--
ALTER TABLE `produk`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `produk`
--
ALTER TABLE `produk`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=12;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
