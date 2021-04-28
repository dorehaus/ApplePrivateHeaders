/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPCryptoInfo;
#import <TSPersistence/TSPersistence-Structs.h>
@class TSPDigest, NSString;

@interface TSPPackageMetadataDataInfo : NSObject {

	char _isUnmaterializedRemoteData;
	long long _identifier;
	TSPDigest* _digest;
	NSString* _preferredFilename;
	NSString* _filename;
	id<TSPCryptoInfo> _decryptionInfo;

}

@property (nonatomic,readonly) long long identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) TSPDigest * digest;                            //@synthesize digest=_digest - In the implementation block
@property (nonatomic,readonly) NSString * preferredFilename;                  //@synthesize preferredFilename=_preferredFilename - In the implementation block
@property (nonatomic,readonly) NSString * filename;                           //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) char isUnmaterializedRemoteData;               //@synthesize isUnmaterializedRemoteData=_isUnmaterializedRemoteData - In the implementation block
@property (nonatomic,readonly) id<TSPCryptoInfo> decryptionInfo;              //@synthesize decryptionInfo=_decryptionInfo - In the implementation block
-(long long)identifier;
-(NSString *)preferredFilename;
-(NSString *)filename;
-(TSPDigest *)digest;
-(id<TSPCryptoInfo>)decryptionInfo;
-(id)initWithDataInfo:(const DataInfo*)arg1 decryptionKey:(id)arg2 ;
-(id)dataStorageWithPackage:(id)arg1 documentURL:(id)arg2 ;
-(char)isUnmaterializedRemoteData;
@end

