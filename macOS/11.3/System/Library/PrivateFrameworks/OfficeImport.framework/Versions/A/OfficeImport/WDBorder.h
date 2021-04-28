/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OITSUColor;

@interface WDBorder : NSObject <NSCopying> {

	int mStyle;
	OITSUColor* mColor;
	unsigned char mWidth;
	unsigned char mSpace;
	char mShadow;
	char mFrame;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(int)style;
-(void)setWidth:(unsigned char)arg1 ;
-(unsigned char)width;
-(void)setStyle:(int)arg1 ;
-(char)frame;
-(unsigned char)space;
-(void)setFrame:(char)arg1 ;
-(id)color;
-(void)setColor:(id)arg1 ;
-(void)setSpace:(unsigned char)arg1 ;
-(char)shadow;
-(void)setShadow:(char)arg1 ;
-(void)setBorder:(id)arg1 ;
-(char)isEqualToBorder:(id)arg1 ;
-(void)setNullBorder;
-(void)setSingleBlackBorder;
@end

