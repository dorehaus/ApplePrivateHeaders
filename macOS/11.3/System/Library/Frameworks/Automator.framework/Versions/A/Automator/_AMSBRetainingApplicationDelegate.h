/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <libobjc.A.dylib/SBApplicationDelegate.h>

@class NSError;

@interface _AMSBRetainingApplicationDelegate : NSObject <SBApplicationDelegate> {

	NSError* _error;

}

@property (retain) NSError * error;              //@synthesize error=_error - In the implementation block
+(id)applicationDelegate;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)eventDidFail:(const AEDesc*)arg1 withError:(id)arg2 ;
@end
