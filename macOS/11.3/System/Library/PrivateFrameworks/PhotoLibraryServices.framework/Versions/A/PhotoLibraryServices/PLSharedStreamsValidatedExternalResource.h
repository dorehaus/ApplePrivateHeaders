/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLValidatedExternalResource.h>

@class NSString;

@interface PLSharedStreamsValidatedExternalResource : PLValidatedExternalResource {

	unsigned _sharedStreamsType;
	NSString* _fingerprint;

}

@property (assign,nonatomic) unsigned sharedStreamsType;              //@synthesize sharedStreamsType=_sharedStreamsType - In the implementation block
@property (nonatomic,retain) NSString * fingerprint;                  //@synthesize fingerprint=_fingerprint - In the implementation block
-(id)description;
-(NSString *)fingerprint;
-(void)setFingerprint:(NSString *)arg1 ;
-(unsigned)sharedStreamsType;
-(void)setSharedStreamsType:(unsigned)arg1 ;
@end

