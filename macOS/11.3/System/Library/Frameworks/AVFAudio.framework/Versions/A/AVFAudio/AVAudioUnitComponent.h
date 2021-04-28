/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVFAudio.framework/Versions/A/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSString, NSURL, NSArray, NSImage, NSDictionary;

@interface AVAudioUnitComponent : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * typeName; 
@property (nonatomic,readonly) NSString * localizedTypeName; 
@property (nonatomic,readonly) NSString * manufacturerName; 
@property (nonatomic,readonly) unsigned long long version; 
@property (nonatomic,readonly) NSString * versionString; 
@property (nonatomic,readonly) NSURL * componentURL; 
@property (nonatomic,readonly) NSArray * availableArchitectures; 
@property (getter=isSandboxSafe,nonatomic,readonly) char sandboxSafe; 
@property (nonatomic,readonly) char hasMIDIInput; 
@property (nonatomic,readonly) char hasMIDIOutput; 
@property (nonatomic,readonly) OpaqueAudioComponentRef audioComponent; 
@property (copy) NSArray * userTagNames; 
@property (nonatomic,readonly) NSArray * allTagNames; 
@property (nonatomic,readonly) AudioComponentDescription audioComponentDescription; 
@property (nonatomic,readonly) NSURL * iconURL; 
@property (nonatomic,readonly) NSImage * icon; 
@property (nonatomic,readonly) char passesAUVal; 
@property (nonatomic,readonly) char hasCustomView; 
@property (nonatomic,readonly) NSDictionary * configurationDictionary; 
-(NSString *)name;
-(unsigned long long)version;
-(NSURL *)iconURL;
-(NSString *)manufacturerName;
-(NSImage *)icon;
-(NSDictionary *)configurationDictionary;
-(NSString *)versionString;
-(NSString *)typeName;
-(void)localeChanged;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 ;
-(id)initWithComponentDescription:(AudioComponentDescription)arg1 withAVAUManagerImpl:(AVAudioUnitComponentManagerImpl*)arg2 ;
-(OpaqueAudioComponentRef)audioComponent;
-(NSString *)localizedTypeName;
-(NSArray *)userTagNames;
-(void)setUserTagNames:(NSArray *)arg1 ;
-(NSArray *)allTagNames;
-(NSURL *)componentURL;
-(NSArray *)availableArchitectures;
-(char)hasCustomView;
-(char)passesAUVal;
-(char)isSandboxSafe;
-(char)hasMIDIInput;
-(char)hasMIDIOutput;
-(AudioComponentDescription)audioComponentDescription;
-(char)supportsNumberInputChannels:(long long)arg1 outputChannels:(long long)arg2 ;
-(id)GetTypeName:(unsigned)arg1 ;
-(char)isComponentDescriptionMatch:(AudioComponentDescription)arg1 ;
@end

