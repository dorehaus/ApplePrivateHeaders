/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface TIEventDescriptorRegistry : NSObject {

	char _loaded;
	NSMutableDictionary* _eventDescriptors;
	NSMutableDictionary* _eventSpecs;
	NSDictionary* _config;

}

@property (nonatomic,readonly) NSDictionary * config;                               //@synthesize config=_config - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * eventDescriptors;              //@synthesize eventDescriptors=_eventDescriptors - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * eventSpecs;                    //@synthesize eventSpecs=_eventSpecs - In the implementation block
@property (assign,nonatomic) char loaded;                                           //@synthesize loaded=_loaded - In the implementation block
+(id)registryWithConfig:(id)arg1 ;
+(id)registryWithDescriptors:(id)arg1 andSpecs:(id)arg2 ;
-(char)loaded;
-(NSDictionary *)config;
-(void)setLoaded:(char)arg1 ;
-(NSMutableDictionary *)eventSpecs;
-(id)initWithConfig:(id)arg1 ;
-(NSMutableDictionary *)eventDescriptors;
-(id)contextFromError:(id)arg1 ;
-(id)valueFromError:(id)arg1 forKey:(id)arg2 ;
-(id)initWithDescriptors:(id)arg1 andSpecs:(id)arg2 ;
-(id)allEventDescriptors;
-(id)eventDescriptorWithName:(id)arg1 ;
-(id)eventSpecWithName:(id)arg1 ;
-(void)loadEventDescriptors;
@end

