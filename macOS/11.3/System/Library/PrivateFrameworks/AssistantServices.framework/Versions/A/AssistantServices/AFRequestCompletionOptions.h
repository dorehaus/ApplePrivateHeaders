/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AFTriggerlessListeningOptions;

@interface AFRequestCompletionOptions : NSObject <NSSecureCoding, NSCopying> {

	AFTriggerlessListeningOptions* _triggerlessListeningOptions;

}

@property (nonatomic,copy) AFTriggerlessListeningOptions * triggerlessListeningOptions;              //@synthesize triggerlessListeningOptions=_triggerlessListeningOptions - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithShowUIDuringListening:(char)arg1 playAlertBeforeListening:(char)arg2 ;
-(void)setTriggerlessListeningOptions:(AFTriggerlessListeningOptions *)arg1 ;
-(AFTriggerlessListeningOptions *)triggerlessListeningOptions;
@end

