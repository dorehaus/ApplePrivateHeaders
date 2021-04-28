/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/Versions/A/ScoreBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScoreBoard/ScoreBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SCRSchedulable.h>

@class NSMutableDictionary, SCRSchedulingConfiguration, SCRTaskIdentifier, SCRTaskHandler, SCRTaskTargetConfiguration, NSString;

@interface SCRTask : NSObject <BSDescriptionProviding, NSCopying, SCRSchedulable> {

	NSMutableDictionary* _attributes;
	SCRSchedulingConfiguration* _schedulingConfiguration;
	SCRTaskIdentifier* _identifier;
	SCRTaskHandler* _taskHandler;
	/*^block*/id _completionHandler;
	SCRTaskTargetConfiguration* _targetConfiguration;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) id workItem; 
@property (nonatomic,retain) SCRTaskIdentifier * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) SCRTaskHandler * taskHandler;                            //@synthesize taskHandler=_taskHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (copy) SCRSchedulingConfiguration * schedulingConfiguration;              //@synthesize schedulingConfiguration=_schedulingConfiguration - In the implementation block
@property (copy) SCRTaskTargetConfiguration * targetConfiguration;                  //@synthesize targetConfiguration=_targetConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(SCRTaskIdentifier *)identifier;
-(void)setIdentifier:(SCRTaskIdentifier *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(id)attributeForKey:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)workItem;
-(SCRSchedulingConfiguration *)schedulingConfiguration;
-(void)setSchedulingConfiguration:(SCRSchedulingConfiguration *)arg1 ;
-(SCRTaskTargetConfiguration *)targetConfiguration;
-(SCRTaskHandler *)taskHandler;
-(void)addAttribute:(id)arg1 withKey:(id)arg2 ;
-(void)removeAttributeWithKey:(id)arg1 ;
-(void)setTaskHandler:(SCRTaskHandler *)arg1 ;
-(void)setTargetConfiguration:(SCRTaskTargetConfiguration *)arg1 ;
-(void)setWorkItem:(id)arg1 ;
@end

