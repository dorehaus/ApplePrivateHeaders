/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAStateElement.h>

@class NSString;

@interface CAStateSetValue : CAStateElement {

	NSString* _keyPath;
	id _value;

}

@property (nonatomic,copy) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,retain) id value; 
+(char)supportsSecureCoding;
-(char)CAMLTypeSupportedForKey:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)value;
-(NSString *)keyPath;
-(void)setValue:(id)arg1 ;
-(char)matches:(id)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(void)apply:(id)arg1 ;
-(void)foreachLayer:(/*^block*/id)arg1 ;
@end

