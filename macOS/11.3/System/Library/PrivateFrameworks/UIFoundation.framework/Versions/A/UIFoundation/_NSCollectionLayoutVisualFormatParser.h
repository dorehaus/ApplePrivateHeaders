/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface _NSCollectionLayoutVisualFormatParser : NSObject {

	int _axis;
	NSString* _visualFormat;
	NSString* _name;
	NSArray* _items;

}

@property (assign,nonatomic) int axis;                           //@synthesize axis=_axis - In the implementation block
@property (nonatomic,copy) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * visualFormat;              //@synthesize visualFormat=_visualFormat - In the implementation block
@property (nonatomic,copy) NSArray * items;                      //@synthesize items=_items - In the implementation block
+(int)axisForVisualFormat:(id)arg1 ;
+(id)parserWithVisualFormat:(id)arg1 ;
+(id)parsersWithVisualFormats:(id)arg1 seperatedByDelimiter:(id)arg2 ;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)initWithVisualFormat:(id)arg1 ;
-(void)_parse;
-(NSString *)visualFormat;
-(void)setVisualFormat:(NSString *)arg1 ;
-(int)axis;
-(void)setAxis:(int)arg1 ;
@end
