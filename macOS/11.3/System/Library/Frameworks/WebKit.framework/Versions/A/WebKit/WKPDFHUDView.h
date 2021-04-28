/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <AppKit/NSView.h>

@interface WKPDFHUDView : NSView {

	WeakPtr<WebKit::WebPageProxy, WTF::EmptyCounter>* _page;
	RetainPtr<NSString>* _activeControl;
	ObjectIdentifier<WebKit::PDFPluginIdentifierType> _pluginIdentifier;
	double _deviceScaleFactor;
	RetainPtr<CALayer>* _layer;
	RetainPtr<CALayer>* _activeLayer;
	CGSize _frameSize;
	RetainPtr<NSMutableDictionary<NSString *,NSImage *>>* _cachedIcons;
	char _visible;
	char _mouseMovedToHUD;
	char _initialHideTimerFired;

}
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)_setVisible:(BOOL)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 pluginIdentifier:(ObjectIdentifier<WebKit::PDFPluginIdentifierType>)arg2 page:(WebPageProxy*)arg3 ;
-(void)setDeviceScaleFactor:(double)arg1 ;
-(void)_setupLayer:(id)arg1 ;
-(void)_hideTimerFired;
-(void)_redrawLayer;
-(void)_setLayerOpacity:(double)arg1 ;
-(id)_controlForEvent:(id)arg1 ;
-(id)_layerForEvent:(id)arg1 ;
-(void)_performActionForControl:(id)arg1 ;
-(Optional<unsigned long>)_controlIndexForEvent:(id)arg1 ;
-(id)_getImageForControlName:(id)arg1 ;
-(void)_loadIconImages;
@end
