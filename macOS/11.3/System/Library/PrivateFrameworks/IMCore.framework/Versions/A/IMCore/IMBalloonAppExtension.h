/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMBalloonPlugin.h>

@class NSExtension, LSPlugInKitProxy, NSUUID, NSNumber;

@interface IMBalloonAppExtension : IMBalloonPlugin {

	char _canSendDataPayloads;
	char _shouldBalloonHideAppIcon;
	NSExtension* _extension;
	LSPlugInKitProxy* _proxy;
	NSUUID* _requestIdentifier;

}

@property (nonatomic,retain) LSPlugInKitProxy * proxy;                      //@synthesize proxy=_proxy - In the implementation block
@property (assign) NSUUID * requestIdentifier;                              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic) char canSendDataPayloads;                      //@synthesize canSendDataPayloads=_canSendDataPayloads - In the implementation block
@property (assign,nonatomic) char shouldBalloonHideAppIcon;                 //@synthesize shouldBalloonHideAppIcon=_shouldBalloonHideAppIcon - In the implementation block
@property (nonatomic,retain,readonly) NSExtension * extension;              //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * itemID; 
@property (nonatomic,retain,readonly) id<PKPlugIn> plugin; 
@property (nonatomic,readonly) char isLaunchProhibited; 
-(id)version;
-(NSNumber *)itemID;
-(char)isLaunchProhibited;
-(NSExtension *)extension;
-(LSPlugInKitProxy *)proxy;
-(id<PKPlugIn>)plugin;
-(NSUUID *)requestIdentifier;
-(void)setProxy:(LSPlugInKitProxy *)arg1 ;
-(void)setRequestIdentifier:(NSUUID *)arg1 ;
-(id)initWithPluginBundle:(id)arg1 appBundle:(id)arg2 ;
-(void)setCanSendDataPayloads:(char)arg1 ;
-(void)setShouldBalloonHideAppIcon:(char)arg1 ;
-(id)initWithPluginBundle:(id)arg1 pluginKitProxy:(id)arg2 extension:(id)arg3 ;
-(id)initWithPluginBundle:(id)arg1 extension:(id)arg2 ;
-(char)isBetaPlugin;
-(char)shouldBalloonHideAppIcon;
-(char)canSendDataPayloads;
-(id)_initWithPluginBundle:(id)arg1 extension:(id)arg2 pluginKitProxyClass:(Class)arg3 ;
@end

