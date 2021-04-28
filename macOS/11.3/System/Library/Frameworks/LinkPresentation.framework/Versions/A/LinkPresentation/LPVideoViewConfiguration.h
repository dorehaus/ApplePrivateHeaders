/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/Versions/A/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface LPVideoViewConfiguration : NSObject <NSCopying> {

	char _disablePlayback;
	char _disablePlaybackControls;
	char _disableAutoPlay;
	char _allowsLoadingMediaWithAutoPlayDisabled;
	double _fullScreenTransitionCornerRadius;

}

@property (assign,nonatomic) char disablePlayback;                                     //@synthesize disablePlayback=_disablePlayback - In the implementation block
@property (assign,nonatomic) char disablePlaybackControls;                             //@synthesize disablePlaybackControls=_disablePlaybackControls - In the implementation block
@property (assign,nonatomic) char disableAutoPlay;                                     //@synthesize disableAutoPlay=_disableAutoPlay - In the implementation block
@property (assign,nonatomic) char allowsLoadingMediaWithAutoPlayDisabled;              //@synthesize allowsLoadingMediaWithAutoPlayDisabled=_allowsLoadingMediaWithAutoPlayDisabled - In the implementation block
@property (assign,nonatomic) double fullScreenTransitionCornerRadius;                  //@synthesize fullScreenTransitionCornerRadius=_fullScreenTransitionCornerRadius - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)disableAutoPlay;
-(char)disablePlayback;
-(void)setDisablePlayback:(char)arg1 ;
-(char)disablePlaybackControls;
-(void)setDisablePlaybackControls:(char)arg1 ;
-(void)setDisableAutoPlay:(char)arg1 ;
-(char)allowsLoadingMediaWithAutoPlayDisabled;
-(void)setAllowsLoadingMediaWithAutoPlayDisabled:(char)arg1 ;
-(double)fullScreenTransitionCornerRadius;
-(void)setFullScreenTransitionCornerRadius:(double)arg1 ;
@end

