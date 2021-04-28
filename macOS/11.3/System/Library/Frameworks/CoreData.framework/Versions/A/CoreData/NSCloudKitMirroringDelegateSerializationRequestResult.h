/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSCloudKitMirroringResult.h>

@class NSDictionary;

@interface NSCloudKitMirroringDelegateSerializationRequestResult : NSCloudKitMirroringResult {

	NSDictionary* _serializedObjects;

}

@property (nonatomic,readonly) NSDictionary * serializedObjects;              //@synthesize serializedObjects=_serializedObjects - In the implementation block
-(id)initWithRequest:(id)arg1 serializedObjects:(id)arg2 error:(id)arg3 ;
-(NSDictionary *)serializedObjects;
-(void)dealloc;
@end
