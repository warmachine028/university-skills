<?php
include("include/header.php");
?>
<table>
    <tr>
        <th>Company</th>
        <th>Contact</th>
        <th>Country</th>
    </tr>
    <?php
    $query = "SELECT company, contact, country FROM `html table`";
    $result = mysqli_query($con, $query);
    while ($fetch = mysqli_fetch_object($result)) {
    ?>
    <tr>
        <td><?php echo $fetch->company ?></td>
        <td><?php echo $fetch->contact ?></td>
        <td><?php echo $fetch->country ?></td>
    </tr>
    <?php
    }
    ?>
</table>
<?php
include("include/footer.php");
?>