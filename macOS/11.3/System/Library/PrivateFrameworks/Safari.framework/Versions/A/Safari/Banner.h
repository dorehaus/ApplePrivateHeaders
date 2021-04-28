/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BannerDelegate;
@class NSView, NSArray, BarBackground;

@interface Banner : NSObject {

	NSView* bannerContents;
	NSView* firstKeySubview;
	NSView* lastKeySubview;
	NSArray* _topLevelNibObjects;
	id<BannerDelegate> _delegate;
	BarBackground* _bannerView;

}

@property (assign,nonatomic,__weak) id<BannerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (getter=isInstalled,nonatomic,readonly) char installed; 
@property (nonatomic,retain,readonly) BarBackground * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
+(int)bannerSortOrder;
+(char)bannerHasBottomBorder;
+(id)bannerBackgroundImage;
-(void)dealloc;
-(id)init;
-(id<BannerDelegate>)delegate;
-(void)setDelegate:(id<BannerDelegate>)arg1 ;
-(char)isInstalled;
-(id)_createBannerView;
-(void)_populateBannerViewFromNib:(id)arg1 ;
-(id)bannerNibName;
-(long long)compareBanners:(id)arg1 ;
-(void)didInstallBannerView;
-(void)didUninstallBannerView;
-(void)uninstall:(id)arg1 ;
-(void)willInstallBannerView;
-(void)willUninstallBannerView;
-(BarBackground *)bannerView;
@end
