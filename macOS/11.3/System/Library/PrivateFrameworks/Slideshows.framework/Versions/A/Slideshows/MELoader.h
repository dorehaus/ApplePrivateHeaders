/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MELoader : NSObject {

	NSMutableDictionary* _exporters;
	NSMutableDictionary* _exporterProperties;

}
-(void)dealloc;
-(id)init;
-(id)exporterIdentifierWithOptions:(id)arg1 ;
-(id)exporterWithIdentifier:(id)arg1 andDocument:(id)arg2 andDelegate:(id)arg3 ;
-(id)exporterPropertyWithIdentifier:(id)arg1 andKey:(id)arg2 ;
-(void)loadBuiltInPlugins;
-(void)loadPluginWithIdentifier:(id)arg1 ;
-(void)loadEmbeddedPlugins;
-(void)loadPluginsInFolder:(id)arg1 matchingIdentifier:(id)arg2 ;
-(void)loadPluginAtPath:(id)arg1 matchingIdentifier:(id)arg2 ;
-(void)registerExporterClass:(Class)arg1 withIdentifier:(id)arg2 andProperties:(id)arg3 ;
-(id)exporterIdentifiers;
@end

