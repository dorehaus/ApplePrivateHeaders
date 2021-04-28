/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFIVGenerator.h>

@class NSData, NSString;

@interface SFIncrementingIVGenerator : NSObject <SFIVGenerator> {

	id _incrementingIVGeneratorInternal;

}

@property (nonatomic,copy) NSData * messageID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)generateIVWithLength:(long long)arg1 error:(id*)arg2 ;
-(id)initWithRandomMessageID;
-(id)initWithMessageID:(id)arg1 ;
-(id)init;
-(NSData *)messageID;
-(void)setMessageID:(NSData *)arg1 ;
@end

