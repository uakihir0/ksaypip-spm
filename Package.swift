// swift-tools-version:5.7
import PackageDescription

let package = Package(
    name: "ksaypip",
    platforms: [
        .iOS(.v15),
.macOS(.v12.0)
    ],
    products: [
        .library(
            name: "ksaypip",
            targets: ["ksaypip"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "ksaypip",
            path: "./ksaypip.xcframework"
        ),
    ]
)
