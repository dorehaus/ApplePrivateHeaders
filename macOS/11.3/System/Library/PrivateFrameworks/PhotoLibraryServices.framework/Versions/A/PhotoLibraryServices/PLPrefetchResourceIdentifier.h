/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PLPrefetchResourceIdentifier : NSObject <NSCopying> {

	unsigned _version;
	NSString* _assetUuid;
	unsigned long long _cplType;

}

@property (nonatomic,readonly) NSString * assetUuid;                    //@synthesize assetUuid=_assetUuid - In the implementation block
@property (nonatomic,readonly) unsigned version;                        //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) unsigned long long cplType;              //@synthesize cplType=_cplType - In the implementation block
+(id)resourceDescriptionWithAssetUuid:(id)arg1 resourceVersion:(unsigned)arg2 cplType:(unsigned long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)version;
-(unsigned long long)cplType;
-(NSString *)assetUuid;
-(id)initWithAssetUuid:(id)arg1 version:(unsigned)arg2 cplType:(unsigned long long)arg3 ;
@end

