/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/CRRegister.h>

@class CRSet, NSSet;

@interface CRRegisterMultiValue : CRRegister {

	CRSet* _values;
	NSSet* _cachedValues;

}

@property (nonatomic,retain) CRSet * values;                    //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) NSSet * cachedValues;              //@synthesize cachedValues=_cachedValues - In the implementation block
-(char)isEqual:(id)arg1 ;
-(id)description;
-(CRSet *)values;
-(id)contents;
-(void)setValues:(CRSet *)arg1 ;
-(void)setContents:(id)arg1 ;
-(void)setDocument:(id)arg1 ;
-(id)initWithValues:(id)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(NSSet *)cachedValues;
-(id)initWithCRCoder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(id)initWithContents:(id)arg1 document:(id)arg2 ;
-(void)setCachedValues:(NSSet *)arg1 ;
-(void)mergeWithRegisterMultiValue:(id)arg1 ;
-(id)allContents;
@end

