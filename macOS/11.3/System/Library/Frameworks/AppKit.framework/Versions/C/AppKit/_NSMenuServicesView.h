/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSString, NSImage, NSMenuItem;

@interface _NSMenuServicesView : NSView {

	NSString* _bundlePath;
	NSString* _categoryName;
	double _minimumWidths[3];
	double _actualWidths[3];
	double _categoryNameWidth;
	NSImage* _image;
	NSMenuItem* _explicitMenuItem;
	struct {
		unsigned _shouldDrawCategoryArea : 1;
		unsigned _shouldDrawCategoryName : 1;
		unsigned _imageLoadHasBegun : 1;
		unsigned _imageIsLoaded : 1;
		unsigned _inDrawRect : 1;
		unsigned _isSpacer : 1;
		unsigned _isEditServicesItem : 1;
		unsigned _isNoServiceApplyItem : 1;
		unsigned _iconIsDefaultBrowser : 1;
		unsigned reserved : 23;
	}  _flags;

}

@property (nonatomic,copy) NSString * bundlePath;                        //@synthesize bundlePath=_bundlePath - In the implementation block
@property (nonatomic,copy) NSString * categoryName; 
@property (nonatomic,retain) NSMenuItem * explicitMenuItem;              //@synthesize explicitMenuItem=_explicitMenuItem - In the implementation block
@property (assign,nonatomic) char shouldDrawCategoryName; 
@property (assign,nonatomic) char shouldDrawCategoryArea; 
@property (assign,nonatomic) char isSpacer; 
@property (assign,nonatomic) char isEditServicesItem; 
@property (assign,nonatomic) char isNoServicesApplyItem; 
@property (assign,nonatomic) char iconIsDefaultBrowser; 
+(void)initialize;
-(void)dealloc;
-(NSString *)bundlePath;
-(id)title;
-(char)isFlipped;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)drawRect:(CGRect)arg1 ;
-(void)sizeToFit;
-(char)isSpacer;
-(NSString *)categoryName;
-(void)setShouldDrawCategoryName:(char)arg1 ;
-(char)isEditServicesItem;
-(char)shouldDrawCategoryName;
-(void)setShouldDrawCategoryArea:(char)arg1 ;
-(void)getMinimumWidths:(double*)arg1 ;
-(void)setActualWidths:(const double*)arg1 ;
-(void)setBundlePath:(NSString *)arg1 ;
-(void)setIconIsDefaultBrowser:(char)arg1 ;
-(void)setIsNoServicesApplyItem:(char)arg1 ;
-(void)setIsEditServicesItem:(char)arg1 ;
-(void)setCategoryName:(NSString *)arg1 ;
-(void)setIsSpacer:(char)arg1 ;
-(id)categoryHighlightColor;
-(id)categoryColor;
-(double)roundUpForTextMeasurement:(double)arg1 ;
-(id)representingMenuItem;
-(id)getKeyEquivalentCellForItem:(id)arg1 ;
-(void)computeMinimumMetrics:(NSMenuServicesViewMetrics*)arg1 ;
-(void)computeMinimumWidthsIfNecessary;
-(void)loadedImage:(id)arg1 ;
-(id)highlightedCategoryAttributes;
-(id)categoryAttributes;
-(void)getMetrics:(NSMenuServicesViewMetrics*)arg1 forWidths:(const double*)arg2 ;
-(CGRect)flipHorizontallyIfNecessary:(CGRect)arg1 ;
-(void)drawCategoryNameInRect:(CGRect)arg1 highlighted:(char)arg2 backgroundStyle:(long long)arg3 clipRect:(CGRect)arg4 ;
-(void)drawImageInRect:(CGRect)arg1 backgroundStyle:(long long)arg2 clipRect:(CGRect)arg3 ;
-(void)drawTitle:(id)arg1 inRect:(CGRect)arg2 highlighted:(char)arg3 enabled:(char)arg4 backgroundStyle:(long long)arg5 clipRect:(CGRect)arg6 ;
-(void)drawKeyEquivalentForItem:(id)arg1 inRect:(CGRect)arg2 highlighted:(char)arg3 backgroundStyle:(long long)arg4 clipRect:(CGRect)arg5 ;
-(char)isNoServicesApplyItem;
-(char)shouldDrawCategoryArea;
-(char)iconIsDefaultBrowser;
-(NSMenuItem *)explicitMenuItem;
-(void)setExplicitMenuItem:(NSMenuItem *)arg1 ;
@end

