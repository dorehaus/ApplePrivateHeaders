/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDRunWithCharacterProperties.h>

@class NSData;

@interface WDFieldMarker : WDRunWithCharacterProperties {

	int mFieldPosition;
	int mMarkerType;
	unsigned char mFieldType;
	NSData* mData;
	unsigned mZombieEmbed : 1;
	unsigned mResultDirty : 1;
	unsigned mResultEdited : 1;
	unsigned mLocked : 1;
	unsigned mPrivateResult : 1;
	unsigned mNested : 1;
	unsigned mHasSeparator : 1;

}
-(id)description;
-(id)data;
-(void)setData:(id)arg1 ;
-(void)setLocked:(char)arg1 ;
-(char)locked;
-(char)hasSeparator;
-(void)setFieldType:(unsigned char)arg1 ;
-(unsigned char)fieldType;
-(int)fieldMarkerType;
-(int)runType;
-(void)setFieldPosition:(int)arg1 ;
-(void)setFieldMarkerType:(int)arg1 ;
-(id)initWithParagraph:(id)arg1 ;
-(int)fieldPosition;
-(char)zombieEmbed;
-(void)setZombieEmbed:(char)arg1 ;
-(char)resultDirty;
-(void)setResultDirty:(char)arg1 ;
-(char)resultEdited;
-(void)setResultEdited:(char)arg1 ;
-(char)privateResult;
-(void)setPrivateResult:(char)arg1 ;
-(char)nested;
-(void)setNested:(char)arg1 ;
-(void)setHasSeparator:(char)arg1 ;
@end

