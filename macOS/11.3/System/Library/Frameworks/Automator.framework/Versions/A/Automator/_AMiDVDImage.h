/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/_AMiDVDItem.h>

@class NSString, _AMiDVDSlideshow;

@interface _AMiDVDImage : _AMiDVDItem

@property (copy) NSString * comment; 
@property (copy) NSString * name; 
@property (copy,readonly) _AMiDVDSlideshow * parent; 
@property (copy) NSString * path; 
@property (copy) NSString * title; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(_AMiDVDSlideshow *)parent;
-(NSString *)title;
-(void)setComment:(NSString *)arg1 ;
-(NSString *)comment;
@end

