/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface CNVCardParsedLine : NSObject {

	NSString* _name;
	id _value;
	NSArray* _parameters;
	NSString* _grouping;
	char _isPrimary;

}

@property (copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (retain) id value;                            //@synthesize value=_value - In the implementation block
@property (copy) NSArray * parameters;                  //@synthesize parameters=_parameters - In the implementation block
@property (assign) char isPrimary;                      //@synthesize isPrimary=_isPrimary - In the implementation block
@property (copy) NSString * grouping;                   //@synthesize grouping=_grouping - In the implementation block
-(id)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSArray *)parameters;
-(void)setParameters:(NSArray *)arg1 ;
-(char)isPrimary;
-(void)setIsPrimary:(char)arg1 ;
-(void)setGrouping:(NSString *)arg1 ;
-(NSString *)grouping;
@end

