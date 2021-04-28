/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSView.h>
#import <Safari/SafariDelegatingView.h>

@protocol SafariViewDelegate;
@class NSString;

@interface LibraryContainerView : NSView <SafariDelegatingView> {

	id<SafariViewDelegate> _safariViewDelegate;

}

@property (assign,nonatomic,__weak) id<SafariViewDelegate> safariViewDelegate;              //@synthesize safariViewDelegate=_safariViewDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidEndLiveResize;
-(id<SafariViewDelegate>)safariViewDelegate;
-(void)setSafariViewDelegate:(id<SafariViewDelegate>)arg1 ;
@end

