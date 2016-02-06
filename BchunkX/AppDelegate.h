//
//  AppDelegate.h
//  BchunkX
//
//
//binchunker for Unix
//Copyright (c) 1998-2004  Heikki Hannikainen <hessu@hes.iki.fi>
//
//Copyright (c) 2015 Allan Amstadt
//
//This program is free software; you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation; either version 2 of the License, or
//(at your option) any later version.
//
//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.
//
//You should have received a copy of the GNU General Public License
//along with this program; if not, write to the Free Software
//Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA


#import <Cocoa/Cocoa.h>



@interface AppDelegate : NSObject <NSApplicationDelegate>{
    long int bytesToWrite;
    NSThread *bgThread;
}
@property (weak) IBOutlet NSWindow *window;
@property IBOutlet NSProgressIndicator *progresIndicator;
@property IBOutlet NSTextField *fnttxt;
@property long int writtenBytes;
- (IBAction)cancel:(id)sender;
- (IBAction)openFile:(id)sender;
@end

