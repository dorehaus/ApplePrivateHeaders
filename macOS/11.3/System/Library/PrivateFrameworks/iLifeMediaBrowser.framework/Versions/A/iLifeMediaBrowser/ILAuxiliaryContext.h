/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ILMediaObjectsProvider, NSLocking;
@class NSString, ILChangeManager, NSObject;

@interface ILAuxiliaryContext : NSObject {

	NSString* _pluginIdentifier;
	ILChangeManager* _changeManager;
	NSObject*<ILMediaObjectsProvider> _mediaObjectsProvider;
	int _loadState;
	NSObject*<NSLocking> _stateLock;

}
-(void)dealloc;
-(id)pluginIdentifier;
-(id)stateLock;
-(void)setPluginIdentifier:(id)arg1 ;
-(int)loadState;
-(id)changeManager;
-(id)mediaObjectsProvider;
-(void)setMediaObjectsProvider:(id)arg1 ;
-(void)setLoadState:(int)arg1 ;
-(id)initWithPluginIdentifier:(id)arg1 mediaObjectsProvider:(id)arg2 stateLock:(id)arg3 ;
-(void)setChangeManager:(id)arg1 ;
@end
