//
//  Package.swift
//  
//
//  Created by Aysel Abdullayeva on 06.02.26.
//

import PackageDescription

let package = Package(
    name: "SmaatoSDKStandalone",
    platforms: [.iOS(.v12)],
    products: [
        .library(name: "SmaatoSDK", targets: ["SmaatoSDKDependencies"]),

        .library(name: "SmaatoSDKCore", targets: ["SmaatoSDKCoreDependencies"]),
        .library(name: "SmaatoSDKBanner", targets: ["SmaatoSDKBannerDependencies"]),
        .library(name: "SmaatoSDKInterstitial", targets: ["SmaatoSDKInterstitialDependencies"]),
        .library(name: "SmaatoSDKRewardedAds", targets: ["SmaatoSDKRewardedAdsDependencies"]),
        .library(name: "SmaatoSDKNative", targets: ["SmaatoSDKNativeDependencies"]),
        .library(name: "SmaatoSDKUnifiedBidding", targets: ["SmaatoSDKUnifiedBiddingDependencies"]),
        .library(name: "SmaatoSDKInAppBidding", targets: ["SmaatoSDKInAppBiddingDependencies"]),
    ],
    targets: [
        .binaryTarget(name: "ATOM", path: "ATOM.xcframework"),
        .binaryTarget(name: "NGSDK", path: "NGSDK.xcframework"),

        .binaryTarget(name: "SmaatoSDKCoreBinary", path: "SmaatoSDKCore.xcframework"),
        .binaryTarget(name: "SmaatoSDKBannerBinary", path: "SmaatoSDKBanner.xcframework"),
        .binaryTarget(name: "SmaatoSDKInterstitialBinary", path: "SmaatoSDKInterstitial.xcframework"),
        .binaryTarget(name: "SmaatoSDKRewardedAdsBinary", path: "SmaatoSDKRewardedAds.xcframework"),
        .binaryTarget(name: "SmaatoSDKNativeBinary", path: "SmaatoSDKNative.xcframework"),
        .binaryTarget(name: "SmaatoSDKUnifiedBiddingBinary", path: "SmaatoSDKUnifiedBidding.xcframework"),
        .binaryTarget(name: "SmaatoSDKInAppBiddingBinary", path: "SmaatoSDKInAppBidding.xcframework"),

        .binaryTarget(name: "SmaatoHyBidAdapterBinary", path: "Smaato_HyBid.xcframework"),
        .binaryTarget(name: "OMSDK", path: "OMSDK-1.5.4/OMSDK_Pubnativenet.xcframework"),

        .target(
            name: "SmaatoSDKDependencies",
            dependencies: [
                "SmaatoSDKCoreBinary",
                "SmaatoSDKBannerBinary",
                "SmaatoSDKInterstitialBinary",
                "SmaatoSDKRewardedAdsBinary",
                "SmaatoSDKNativeBinary",
                "SmaatoSDKUnifiedBiddingBinary",
                "SmaatoSDKInAppBiddingBinary",
                "ATOM",
                "NGSDK",
                "OMSDK"
            ],
            path: "Sources/SmaatoSDKDependencies"
        ),

        .target(
            name: "SmaatoSDKCoreDependencies",
            dependencies: ["SmaatoSDKCoreBinary", "ATOM", "NGSDK", "OMSDK"],
            path: "Sources/SmaatoSDKCoreDependencies"
        ),
        .target(
            name: "SmaatoSDKBannerDependencies",
            dependencies: ["SmaatoSDKBannerBinary", "SmaatoSDKCoreBinary", "ATOM", "NGSDK", "OMSDK"],
            path: "Sources/SmaatoSDKBannerDependencies"
        ),
        .target(
            name: "SmaatoSDKInterstitialDependencies",
            dependencies: ["SmaatoSDKInterstitialBinary", "SmaatoSDKCoreBinary", "ATOM", "NGSDK", "OMSDK"],
            path: "Sources/SmaatoSDKInterstitialDependencies"
        ),
        .target(
            name: "SmaatoSDKRewardedAdsDependencies",
            dependencies: ["SmaatoSDKRewardedAdsBinary", "SmaatoSDKCoreBinary", "ATOM", "NGSDK", "OMSDK"],
            path: "Sources/SmaatoSDKRewardedAdsDependencies"
        ),
        .target(
            name: "SmaatoSDKNativeDependencies",
            dependencies: ["SmaatoSDKNativeBinary", "SmaatoSDKCoreBinary", "ATOM", "NGSDK", "OMSDK"],
            path: "Sources/SmaatoSDKNativeDependencies"
        ),
        .target(
            name: "SmaatoSDKUnifiedBiddingDependencies",
            dependencies: ["SmaatoSDKUnifiedBiddingBinary", "SmaatoSDKCoreBinary", "ATOM", "NGSDK", "OMSDK"],
            path: "Sources/SmaatoSDKUnifiedBiddingDependencies"
        ),
        .target(
            name: "SmaatoSDKInAppBiddingDependencies",
            dependencies: ["SmaatoSDKInAppBiddingBinary", "SmaatoSDKCoreBinary", "ATOM", "NGSDK", "OMSDK"],
            path: "Sources/SmaatoSDKInAppBiddingDependencies"
        )
    ]
)
