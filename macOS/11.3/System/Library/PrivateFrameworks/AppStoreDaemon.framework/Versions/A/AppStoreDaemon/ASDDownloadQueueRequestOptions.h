/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Versions/A/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/ASDRequestOptions.h>

@class ASDJobManifest;

@interface ASDDownloadQueueRequestOptions : ASDRequestOptions {

	ASDJobManifest* _manifest;

}

@property (nonatomic,copy) ASDJobManifest * manifest;              //@synthesize manifest=_manifest - In the implementation block
-(id)init;
-(ASDJobManifest *)manifest;
-(void)setManifest:(ASDJobManifest *)arg1 ;
-(id)initWithManifest:(id)arg1 ;
@end

