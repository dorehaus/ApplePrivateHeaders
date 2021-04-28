/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/NumbersQuicklook.framework/Versions/A/NumbersQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDLayout.h>

@class TNPageLayoutContainer;

@interface TNPageContentLayout : TSDLayout {

	TNPageLayoutContainer* _pageLayout;
	unsigned long long _pageNumber;

}

@property (__weak,readonly) TNPageLayoutContainer * pageLayout;              //@synthesize pageLayout=_pageLayout - In the implementation block
@property (readonly) unsigned long long pageNumber;                          //@synthesize pageNumber=_pageNumber - In the implementation block
-(void)validate;
-(unsigned long long)pageCount;
-(TNPageLayoutContainer *)pageLayout;
-(unsigned long long)pageNumber;
-(Class)repClassOverride;
-(id)computeLayoutGeometry;
-(id)initWithPageLayout:(id)arg1 ;
@end

