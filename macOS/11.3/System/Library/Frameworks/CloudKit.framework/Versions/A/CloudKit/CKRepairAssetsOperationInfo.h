/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKUploadRequestConfiguration, NSArray;

@interface CKRepairAssetsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	CKUploadRequestConfiguration* _uploadRequestConfiguration;
	NSArray* _assets;
	NSArray* _packages;
	NSArray* _assetMetadata;
	NSArray* _packageMetadata;
	NSArray* _unavailableAssets;
	NSArray* _unavailablePackages;

}

@property (nonatomic,retain) CKUploadRequestConfiguration * uploadRequestConfiguration;              //@synthesize uploadRequestConfiguration=_uploadRequestConfiguration - In the implementation block
@property (nonatomic,retain) NSArray * assets;                                                       //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) NSArray * packages;                                                     //@synthesize packages=_packages - In the implementation block
@property (nonatomic,retain) NSArray * assetMetadata;                                                //@synthesize assetMetadata=_assetMetadata - In the implementation block
@property (nonatomic,retain) NSArray * packageMetadata;                                              //@synthesize packageMetadata=_packageMetadata - In the implementation block
@property (nonatomic,retain) NSArray * unavailableAssets;                                            //@synthesize unavailableAssets=_unavailableAssets - In the implementation block
@property (nonatomic,retain) NSArray * unavailablePackages;                                          //@synthesize unavailablePackages=_unavailablePackages - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CKUploadRequestConfiguration *)uploadRequestConfiguration;
-(NSArray *)assets;
-(void)setAssets:(NSArray *)arg1 ;
-(NSArray *)packages;
-(void)setPackages:(NSArray *)arg1 ;
-(NSArray *)assetMetadata;
-(void)setAssetMetadata:(NSArray *)arg1 ;
-(NSArray *)packageMetadata;
-(void)setPackageMetadata:(NSArray *)arg1 ;
-(NSArray *)unavailableAssets;
-(void)setUnavailableAssets:(NSArray *)arg1 ;
-(NSArray *)unavailablePackages;
-(void)setUnavailablePackages:(NSArray *)arg1 ;
-(void)setUploadRequestConfiguration:(CKUploadRequestConfiguration *)arg1 ;
@end

