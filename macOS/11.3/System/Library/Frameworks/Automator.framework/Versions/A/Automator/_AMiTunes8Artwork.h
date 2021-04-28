/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/_AMiTunes8Item.h>

@class NSImage, NSString, NSNumber, NSData;

@interface _AMiTunes8Artwork : _AMiTunes8Item

@property (copy) NSImage * data; 
@property (copy) NSString * objectDescription; 
@property (readonly) char downloaded; 
@property (copy,readonly) NSNumber * format; 
@property (assign) long long kind; 
@property (copy) NSData * rawData; 
-(NSImage *)data;
-(void)setData:(NSImage *)arg1 ;
-(long long)kind;
-(NSNumber *)format;
-(void)setKind:(long long)arg1 ;
-(NSString *)objectDescription;
-(NSData *)rawData;
-(char)downloaded;
-(void)setRawData:(NSData *)arg1 ;
-(void)setObjectDescription:(NSString *)arg1 ;
@end

