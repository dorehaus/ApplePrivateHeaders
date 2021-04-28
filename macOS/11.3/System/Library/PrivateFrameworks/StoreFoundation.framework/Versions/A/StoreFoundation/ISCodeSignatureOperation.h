/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreFoundation/ISOperation.h>

@class ISServiceProxy, NSString;

@interface ISCodeSignatureOperation : ISOperation {

	ISServiceProxy* _proxy;
	NSString* _bundlePath;
	char _showProgress;
	char _isDeveloperSigned;
	char _isAppleSigned;

}

@property (retain) ISServiceProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
@property (retain) NSString * bundlePath;               //@synthesize bundlePath=_bundlePath - In the implementation block
@property (assign) char showProgress;                   //@synthesize showProgress=_showProgress - In the implementation block
@property (assign) char isDeveloperSigned;              //@synthesize isDeveloperSigned=_isDeveloperSigned - In the implementation block
@property (assign) char isAppleSigned;                  //@synthesize isAppleSigned=_isAppleSigned - In the implementation block
+(id)operationWithBundlePath:(id)arg1 showProgress:(char)arg2 storeClient:(id)arg3 ;
-(NSString *)bundlePath;
-(void)main;
-(ISServiceProxy *)proxy;
-(void)setBundlePath:(NSString *)arg1 ;
-(void)setProxy:(ISServiceProxy *)arg1 ;
-(char)isAppleSigned;
-(id)initWithBundlePath:(id)arg1 showProgress:(char)arg2 storeClient:(id)arg3 ;
-(char)showProgress;
-(void)setShowProgress:(char)arg1 ;
-(void)setIsDeveloperSigned:(char)arg1 ;
-(char)isDeveloperSigned;
-(void)setIsAppleSigned:(char)arg1 ;
@end
