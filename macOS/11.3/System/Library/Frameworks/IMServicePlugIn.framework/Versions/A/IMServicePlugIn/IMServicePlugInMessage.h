/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IMServicePlugIn.framework/Versions/A/IMServicePlugIn
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMServicePlugIn/IMServicePlugIn-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSAttributedString, NSDate;

@interface IMServicePlugInMessage : NSObject <NSCoding, NSCopying> {

	IMServicePlugInMessageInternal* _internal;

}

@property (readonly) NSString * guid; 
@property (nonatomic,copy) NSAttributedString * content; 
@property (nonatomic,copy) NSDate * date; 
+(id)servicePlugInMessageWithContent:(id)arg1 ;
+(id)servicePlugInMessageWithContent:(id)arg1 date:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(void)setContent:(NSAttributedString *)arg1 ;
-(NSAttributedString *)content;
-(void)setDate:(NSDate *)arg1 ;
-(id)initWithContent:(id)arg1 ;
-(NSString *)guid;
-(void)setGuid:(NSString *)arg1 ;
-(id)_initWithGUID:(id)arg1 content:(id)arg2 date:(id)arg3 ;
-(id)initWithContent:(id)arg1 date:(id)arg2 ;
-(id)_initWithInternal:(IMServicePlugInMessageInternal*)arg1 ;
@end

