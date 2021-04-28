/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, _MXExtensionProvider;

@interface _MXExtensionServiceCenter : NSObject {

	NSObject*<OS_dispatch_queue> _extlock;
	NSDictionary* _extensions;
	NSDictionary* _mapsExtensions;
	NSDictionary* _containingAppProxies;
	_MXExtensionProvider* _extensionProvider;

}

@property (nonatomic,copy) NSDictionary * extensions; 
@property (nonatomic,copy) NSDictionary * mapsExtensions; 
@property (nonatomic,copy) NSDictionary * containingAppProxies; 
@property (nonatomic,__weak,readonly) _MXExtensionProvider * extensionProvider;              //@synthesize extensionProvider=_extensionProvider - In the implementation block
-(NSDictionary *)extensions;
-(void)setExtensions:(NSDictionary *)arg1 ;
-(_MXExtensionProvider *)extensionProvider;
-(id)_extensionWithIdentifier:(id)arg1 ;
-(id)initWithExtensionProvider:(id)arg1 ;
-(NSDictionary *)mapsExtensions;
-(void)setMapsExtensions:(NSDictionary *)arg1 ;
-(void)setContainingAppProxies:(NSDictionary *)arg1 ;
-(void)receivedExtensions:(id)arg1 error:(id)arg2 ;
-(NSDictionary *)containingAppProxies;
-(id)allExtensions;
-(void)_clearExtensions;
-(id)_siblingExtensionsWithContainingAppIdentifer:(id)arg1 ;
@end

