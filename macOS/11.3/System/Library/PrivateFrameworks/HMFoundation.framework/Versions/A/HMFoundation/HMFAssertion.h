/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/Versions/A/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>

@class NSString;

@interface HMFAssertion : HMFObject <HMFLogging> {

	char _valid;
	NSString* _name;

}

@property (copy,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSString * uniqueDescription; 
@property (getter=isValid,readonly) char valid;                      //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bundleIdentifier;
+(id)logCategory;
-(void)dealloc;
-(id)init;
-(NSString *)name;
-(void)invalidate;
-(char)isValid;
-(id)initWithName:(id)arg1 ;
-(id)logIdentifier;
-(NSString *)uniqueDescription;
-(void)mark;
-(char)acquire:(id*)arg1 ;
@end
