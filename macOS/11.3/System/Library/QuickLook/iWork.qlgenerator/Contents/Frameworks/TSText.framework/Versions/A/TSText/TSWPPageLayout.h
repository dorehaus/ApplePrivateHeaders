/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSText-Structs.h>
#import <TSDrawables/TSDLayout.h>

@class TSWPLayout;

@interface TSWPPageLayout : TSDLayout {

	TSWPLayout* _headerFooterLayouts[2][3];
	CGRect _headerFooterClipRects[23];
	CGRect _headerFooterBorderRects[23];

}

@property (nonatomic,readonly) double headerHeight; 
@property (nonatomic,readonly) double footerHeight; 
@property (nonatomic,readonly) char allowsHeaderFooter; 
@property (nonatomic,readonly) char hasHeaders; 
@property (nonatomic,readonly) char hasFooters; 
@property (nonatomic,readonly) id<TSWPHeaderFooterProvider> headerFooterProvider; 
@property (nonatomic,readonly) char headerFooterProviderValid; 
@property (nonatomic,readonly) CGRect bodyRect; 
-(double)headerHeight;
-(double)footerHeight;
-(CGRect)bodyRect;
-(char)hasHeaders;
-(void)parentWillChangeTo:(id)arg1 ;
-(char)isHeaderFooterLayout:(id)arg1 ;
-(id)i_insertValidatedHeaderFooterLayouts:(out char*)arg1 ;
-(id<TSWPHeaderFooterProvider>)headerFooterProvider;
-(char)shouldHeaderFooterBeVisible:(long long)arg1 ;
-(char)hasFooters;
-(void)i_clearHeaderFooterLayouts;
-(char)headerFooterProviderValid;
-(char)i_updateHeaderFooterLayouts;
-(char)allowsHeaderFooter;
-(id)headerFooterLayout:(long long)arg1 atIndex:(long long)arg2 ;
-(void)p_updateHeaderFooterClipAndBorderRect;
-(void)p_updateHeaderFooterClipAndBorderRects:(long long)arg1 ;
-(char)p_isHeaderFooter:(long long)arg1 editingAtFragmentIndex:(long long)arg2 ;
-(CGRect)clipRectForHeaderFooter:(long long)arg1 atIndex:(long long)arg2 ;
-(CGRect)borderRectForHeaderFooter:(long long)arg1 atIndex:(long long)arg2 ;
@end

