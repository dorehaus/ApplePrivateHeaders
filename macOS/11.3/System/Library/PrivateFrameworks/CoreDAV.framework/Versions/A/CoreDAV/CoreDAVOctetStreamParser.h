/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVResponseBodyParser.h>

@class NSMutableData, NSError, NSString;

@interface CoreDAVOctetStreamParser : NSObject <CoreDAVResponseBodyParser> {

	NSMutableData* _octetStreamData;
	NSError* _parserError;

}

@property (nonatomic,retain) NSMutableData * octetStreamData;              //@synthesize octetStreamData=_octetStreamData - In the implementation block
@property (readonly) NSError * parserError; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)canHandleContentType:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(NSError *)parserError;
-(NSMutableData *)octetStreamData;
-(char)processData:(id)arg1 forTask:(id)arg2 ;
-(void)setOctetStreamData:(NSMutableData *)arg1 ;
@end

