/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/Versions/A/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface DEManifestSyncDownload : NSObject {

	NSURL* _url;
	unsigned long long _size;

}

@property (nonatomic,retain) NSURL * url;                          //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) unsigned long long size;              //@synthesize size=_size - In the implementation block
-(unsigned long long)size;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
@end
