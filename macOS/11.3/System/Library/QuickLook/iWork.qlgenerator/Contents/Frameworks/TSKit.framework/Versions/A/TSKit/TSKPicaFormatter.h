/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSKit.framework/Versions/A/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSKit/TSKit-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSString, NSNumber;

@interface TSKPicaFormatter : NSFormatter {

	NSString* mPicaSeparator;
	NSNumber* mMinimum;
	NSNumber* mMaximum;

}

@property (nonatomic,copy) NSString * picaSeparator; 
@property (nonatomic,copy) NSNumber * minimum; 
@property (nonatomic,copy) NSNumber * maximum; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)stringForObjectValue:(id)arg1 ;
-(char)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(NSNumber *)minimum;
-(NSNumber *)maximum;
-(void)setMinimum:(NSNumber *)arg1 ;
-(void)setMaximum:(NSNumber *)arg1 ;
-(id)initWithPicaSeparator:(id)arg1 ;
-(void)setPicaSeparator:(NSString *)arg1 ;
-(NSString *)picaSeparator;
@end
