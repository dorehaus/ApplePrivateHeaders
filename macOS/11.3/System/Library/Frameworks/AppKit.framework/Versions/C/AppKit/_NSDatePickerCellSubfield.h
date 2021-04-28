/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _NSDatePickerCellSubfield : NSObject <NSCopying> {

	int _element;
	CGRect _frame;
	NSString* _dateFormat;
	NSString* _stringValue;

}

@property (readonly) int element; 
@property (readonly) CGRect frame; 
@property (readonly) NSString * dateFormat; 
@property (copy) NSString * stringValue; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(int)element;
-(NSString *)stringValue;
-(NSString *)dateFormat;
-(void)setStringValue:(NSString *)arg1 ;
-(CGRect)frame;
-(id)initWithElement:(int)arg1 frame:(CGRect)arg2 dateFormat:(id)arg3 stringValue:(id)arg4 ;
@end

