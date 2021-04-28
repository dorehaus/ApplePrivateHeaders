/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/_AMSafariItem.h>

@class NSColor, NSString;

@interface _AMSafariCharacter : _AMSafariItem

@property (copy) NSColor * color; 
@property (copy) NSString * font; 
@property (assign) long long size; 
-(long long)size;
-(void)setSize:(long long)arg1 ;
-(id)words;
-(id)attachments;
-(id)characters;
-(NSString *)font;
-(void)setFont:(NSString *)arg1 ;
-(NSColor *)color;
-(void)setColor:(NSColor *)arg1 ;
-(id)attributeRuns;
-(id)paragraphs;
@end

