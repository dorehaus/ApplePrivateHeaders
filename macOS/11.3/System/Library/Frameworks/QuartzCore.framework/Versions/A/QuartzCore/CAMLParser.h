/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSURL, NSError;

@interface CAMLParser : NSObject {

	CAMLParserDataRef _data;

}

@property (retain) NSURL * baseURL; 
@property (__weak) id<CAMLParserDelegate> delegate; 
@property (readonly) NSError * error; 
@property (readonly) id result; 
+(id)parser;
+(id)parseContentsOfURL:(id)arg1 ;
-(BOOL)parseBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(id)objectById:(id)arg1 ;
-(id)attributeForKey:(id)arg1 remove:(char)arg2 ;
-(id)willLoadResourceFromURL:(id)arg1 ;
-(void)didLoadResource:(id)arg1 fromURL:(id)arg2 ;
-(id)didFailToLoadResourceFromURL:(id)arg1 ;
-(void)parserError:(id)arg1 ;
-(void)parserWarning:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CAMLParserDelegate>)delegate;
-(void)setDelegate:(id<CAMLParserDelegate>)arg1 ;
-(NSError *)error;
-(NSURL *)baseURL;
-(id)result;
-(BOOL)parseData:(id)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(BOOL)parseContentsOfURL:(id)arg1 ;
-(id)elementValue;
-(void)setElementValue:(id)arg1 ;
-(BOOL)parseString:(id)arg1 ;
@end

