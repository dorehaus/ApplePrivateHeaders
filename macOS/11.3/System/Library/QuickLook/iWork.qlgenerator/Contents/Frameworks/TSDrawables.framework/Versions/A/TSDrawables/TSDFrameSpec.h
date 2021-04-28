/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSBundle, NSDictionary, NSString, NSMutableDictionary, TSUOnce, NSImage;

@interface TSDFrameSpec : NSObject <NSCopying> {

	NSBundle* mBundle;
	NSDictionary* mInfoDictionary;
	char mProviderWasInvalid;
	NSString* mFrameName;
	double mLeftInset;
	double mRightInset;
	double mTopInset;
	double mBottomInset;
	CGPoint mAdornmentPosition;
	double mMinimumAssetScale;
	int mTilingMode;
	char mDisplayInPicker;
	char mHasImages;
	char mHasMask;
	char mHasAdornment;
	NSMutableDictionary* mProvidersByKey;
	double mLeftWidth;
	double mRightWidth;
	double mTopHeight;
	double mBottomHeight;
	CGSize mAdornmentSize;
	TSUOnce* mLoadedImageMetricsOnce;
	Ai mInterest;

}

@property (nonatomic,copy,readonly) NSString * frameName; 
@property (nonatomic,readonly) char displayInPicker; 
@property (nonatomic,readonly) NSImage * thumbnailImage; 
@property (nonatomic,readonly) NSImage * wellImage; 
+(void)initialize;
+(id)frameSpecWithName:(id)arg1 ;
+(id)p_imageKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithBundle:(id)arg1 ;
-(NSImage *)thumbnailImage;
-(NSString *)frameName;
-(double)i_minimumAssetScale;
-(char)i_hasMask;
-(char)i_hasImages;
-(double)i_leftInset;
-(double)i_rightInset;
-(double)i_bottomInset;
-(double)i_topInset;
-(char)i_hasAdornment;
-(CGPoint)i_adornmentPosition;
-(double)i_leftWidth;
-(double)i_rightWidth;
-(double)i_topHeight;
-(double)i_bottomHeight;
-(CGSize)i_adornmentSize;
-(id)p_infoDictionary;
-(id)i_providerForIndex:(int)arg1 mask:(char)arg2 ;
-(id)p_imageDataForKey:(id)arg1 ;
-(void)p_loadImageMetrics;
-(char)displayInPicker;
-(void)i_addInterestInProviders;
-(void)i_removeInterestInProviders;
-(int)i_tilingMode;
-(NSImage *)wellImage;
@end

