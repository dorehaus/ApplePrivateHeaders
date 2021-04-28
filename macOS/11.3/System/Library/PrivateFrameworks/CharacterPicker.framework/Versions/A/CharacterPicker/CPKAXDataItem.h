/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CharacterPicker.framework/Versions/A/CharacterPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CPKCharactersSectionView;

@interface CPKAXDataItem : NSObject {

	CPKCharactersSectionView* _parent;
	long long _section;
	long long _index;

}

@property (readonly) CPKCharactersSectionView * parent;              //@synthesize parent=_parent - In the implementation block
@property (assign) long long section;                                //@synthesize section=_section - In the implementation block
@property (assign) long long index;                                  //@synthesize index=_index - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(CPKCharactersSectionView *)parent;
-(id)accessibilityAttributeNames;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(long long)section;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(id)accessibilityActionNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(void)accessibilityPerformAction:(id)arg1 ;
-(void)setSection:(long long)arg1 ;
-(id)initWithParent:(id)arg1 index:(long long)arg2 section:(long long)arg3 ;
@end
