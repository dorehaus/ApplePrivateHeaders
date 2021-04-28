/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, TSWPParagraphStyle;

@interface TSTLayoutContentCachedKey : NSObject <NSCopying> {

	NSString* mString;
	double mWidth;
	double mHeight;
	TSWPParagraphStyle* mParagraphStyle;
	char mCellWraps;
	int mValueType;
	NSEdgeInsets mPaddingInsets;
	int mVerticalAlignment;
	int mWritingDirection;

}

@property (nonatomic,readonly) NSString * string; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) TSWPParagraphStyle * paragraphStyle; 
@property (nonatomic,readonly) char cellWraps; 
@property (nonatomic,readonly) int valueType; 
@property (nonatomic,readonly) NSEdgeInsets paddingInsets; 
@property (nonatomic,readonly) int verticalAlignment; 
@property (nonatomic,readonly) int writingDirection; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)string;
-(double)width;
-(double)height;
-(int)verticalAlignment;
-(int)valueType;
-(TSWPParagraphStyle *)paragraphStyle;
-(int)writingDirection;
-(char)cellWraps;
-(NSEdgeInsets)paddingInsets;
-(id)initWithString:(id)arg1 width:(double)arg2 height:(double)arg3 paragraphStyle:(id)arg4 cellWraps:(char)arg5 valueType:(int)arg6 paddingInsets:(NSEdgeInsets)arg7 verticalAlignment:(int)arg8 writingDirection:(int)arg9 ;
-(char)isEqualToLayoutContentCachedKey:(id)arg1 ;
@end

