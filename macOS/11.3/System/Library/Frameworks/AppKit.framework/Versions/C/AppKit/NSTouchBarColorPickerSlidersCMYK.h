/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSTouchBarColorPickerSliders.h>

@class NSTouchBarColorPickerSliderCMYKArtworkProvider, NSTouchBarColorPickerSliderArtworkProvider;

@interface NSTouchBarColorPickerSlidersCMYK : NSTouchBarColorPickerSliders

@property (readonly) double _displayedCyanComponent; 
@property (readonly) double _displayedMagentaComponent; 
@property (readonly) double _displayedYellowComponent; 
@property (readonly) double _displayedBlackComponent; 
@property (readonly) double _displayedAlphaComponent; 
@property (copy,readonly) NSTouchBarColorPickerSliderCMYKArtworkProvider * _cyanArtworkProvider; 
@property (copy,readonly) NSTouchBarColorPickerSliderCMYKArtworkProvider * _magentaArtworkProvider; 
@property (copy,readonly) NSTouchBarColorPickerSliderCMYKArtworkProvider * _yellowArtworkProvider; 
@property (copy,readonly) NSTouchBarColorPickerSliderCMYKArtworkProvider * _blackArtworkProvider; 
@property (copy,readonly) NSTouchBarColorPickerSliderArtworkProvider * _alphaArtworkProvider; 
+(id)defaultColorSpace;
+(id)colorValueKeyForComponent:(long long)arg1 ;
+(id)artworkProviderKeyForComponent:(long long)arg1 ;
+(id)accessibilityIdentifierForComponent:(long long)arg1 ;
-(double)_displayedCyanComponent;
-(double)_displayedMagentaComponent;
-(double)_displayedYellowComponent;
-(double)_displayedBlackComponent;
-(double)_displayedAlphaComponent;
-(NSTouchBarColorPickerSliderCMYKArtworkProvider *)_cyanArtworkProvider;
-(NSTouchBarColorPickerSliderCMYKArtworkProvider *)_magentaArtworkProvider;
-(NSTouchBarColorPickerSliderCMYKArtworkProvider *)_yellowArtworkProvider;
-(NSTouchBarColorPickerSliderCMYKArtworkProvider *)_blackArtworkProvider;
-(NSTouchBarColorPickerSliderArtworkProvider *)_alphaArtworkProvider;
@end

