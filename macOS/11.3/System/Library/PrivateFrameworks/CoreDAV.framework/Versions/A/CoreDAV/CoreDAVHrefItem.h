/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVLeafItem.h>

@class NSURL;

@interface CoreDAVHrefItem : CoreDAVLeafItem {

	NSURL* _baseURL;
	int _writeStyle;

}

@property (nonatomic,retain) NSURL * baseURL;              //@synthesize baseURL=_baseURL - In the implementation block
@property (assign,nonatomic) int writeStyle;               //@synthesize writeStyle=_writeStyle - In the implementation block
-(id)description;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)baseURL;
-(void)write:(id)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)payloadAsFullURL;
-(id)payloadAsOriginalURL;
-(void)parserSuggestsBaseURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 baseURL:(id)arg2 ;
-(int)writeStyle;
-(void)setWriteStyle:(int)arg1 ;
@end

