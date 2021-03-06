/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CoreDAVItem.h"

@class NSMutableSet, NSString;

@interface CalDAVCalendarServerChangedPropertyItem : CoreDAVItem
{
    NSMutableSet *_changedParameters;
    NSString *_nameAttribute;
}

- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)dealloc;
- (void)parserFoundAttributes:(id)arg1;
- (void)addChangedParameter:(id)arg1;
- (id)copyParseRules;
@property(retain) NSString *nameAttribute; // @synthesize nameAttribute=_nameAttribute;
@property(retain) NSMutableSet *changedParameters; // @synthesize changedParameters=_changedParameters;

@end

