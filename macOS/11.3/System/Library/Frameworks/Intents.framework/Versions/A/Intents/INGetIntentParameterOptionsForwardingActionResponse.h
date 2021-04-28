/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentForwardingActionResponse.h>

@class NSData;

@interface INGetIntentParameterOptionsForwardingActionResponse : INIntentForwardingActionResponse {

	NSData* _archivedObjectCollection;

}

@property (nonatomic,readonly) NSData * archivedObjectCollection;              //@synthesize archivedObjectCollection=_archivedObjectCollection - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithArchivedObjectCollection:(id)arg1 error:(id)arg2 ;
-(NSData *)archivedObjectCollection;
@end

